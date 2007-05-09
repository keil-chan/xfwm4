/*      $Id$

        This program is free software; you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation; either version 2, or (at your option)
        any later version.

        This program is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with this program; if not, write to the Free Software
        Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

        xfwm4    - (c) 2002-2006 Olivier Fourdan

 */

#ifndef INC_TRANSIENTS_H
#define INC_TRANSIENTS_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <glib.h>
#include "client.h"

Client                  *clientGetTransient                     (Client *);
gboolean                 clientIsTransient                      (Client *);
gboolean                 clientIsModal                          (Client *);
gboolean                 clientIsTransientOrModal               (Client *);
gboolean                 clientIsValidTransientOrModal          (Client *);
gboolean                 clientSameGroup                        (Client *,
                                                                 Client *);
gboolean                 clientIsTransientFor                   (Client *,
                                                                 Client *);
gboolean                 clientIsModalFor                       (Client *,
                                                                 Client *);
gboolean                 clientIsTransientOrModalFor            (Client *,
                                                                 Client *);
gboolean                 clientIsTransientForGroup              (Client *);
gboolean                 clientIsModalForGroup                  (Client *);
gboolean                 clientIsTransientOrModalForGroup       (Client *);
gboolean                 clientTransientOrModalHasAncestor      (Client *,
                                                                 int);
Client                  *clientGetModalFor                      (Client *);
GList                   *clientListTransient                    (Client *);
GList                   *clientListTransientOrModal             (Client *);
gboolean                 clientCheckTransientWindow             (Client *,
                                                                 Window);
#endif /* INC_TRANSIENTS_H */
