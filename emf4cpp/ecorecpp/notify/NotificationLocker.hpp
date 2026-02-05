// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecorecpp/notify/Notification.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <utility>

#include "Notification.hpp"

namespace ecorecpp::notify
{
    /** Block the notifications of a given object, and unblock automatically.
     *
     * The NotificationLocker extends the lifetime of the locked object until
     * the end of its own lifetime.
     *
     * Usage:
     * \code{.cpp}
{
    NotificationLocker lock(someObjectPtr);
    ... // do something
} // implicitly re-enable Notifications
     *
     * @warning Do not forget to explicitly emit a Notification to update any view.
     */
    class NotificationLocker {
    public:
        NotificationLocker( const Notification_ptr& notification )
            : NotificationLocker( notification->getNotifier() )
        {
        }

        NotificationLocker( Notifier_ptr  notifier )
            : _notifier( std::move( notifier ) )
        {
            lock();
        }

        ~NotificationLocker() {
            unlock();
        }

        [[nodiscard]] bool isLocked() const { return _locked; }

        void lock()
        {
            if ( not isLocked() and _notifier )
            {
                _oldState = _notifier->eDeliver();
                _locked = true;
                _notifier->eSetDeliver( false );
            }
        }

        void unlock()
        {
            if ( isLocked() and _notifier )
            {
                 _notifier->eSetDeliver( _oldState );
                _locked = false;
            }
        }

    private:
        Notifier_ptr _notifier;
        bool _locked{};
        bool _oldState{};
    };
} // ecorecpp::notify
