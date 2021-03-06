/***************************************************************************
 *   Copyright (C) 2004-2005 by Andrew Krause                              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef NEW_PROJECT_DIALOG_H
#define NEW_PROJECT_DIALOG_H

#include "../openldev-utils.h"

#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>

typedef struct _NewProjectDialog      NewProjectDialog;
typedef struct _NewProjectDialogPage  NewProjectDialogPage;

struct _NewProjectDialog
{
  GList *pages;

  GtkWidget *assistant;
  GtkWidget *author;
  GtkWidget *combobox;
  GtkWidget *email;
  GtkWidget *homepage;
  GtkWidget *location;
  GtkWidget *name;
  GtkWidget *version;
};

struct _NewProjectDialogPage
{
  GtkWidget *widget;
  gint index;
  const gchar *title;
  GtkAssistantPageType type;
  gboolean complete;
};

NewProjectDialog* openldev_new_project_dialog_new (gpointer);

#endif
