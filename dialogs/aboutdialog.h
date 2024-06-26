#ifndef HEADER_2A21E2B8BDF2A63D
#define HEADER_2A21E2B8BDF2A63D

/***********************************************************************
*Copyright 2010-20XX by 7ymekk
*
*   Licensed under the Apache License, Version 2.0 (the "License");
*   you may not use this file except in compliance with the License.
*   You may obtain a copy of the License at
*
*       http://www.apache.org/licenses/LICENSE-2.0
*
*   Unless required by applicable law or agreed to in writing, software
*   distributed under the License is distributed on an "AS IS" BASIS,
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*   See the License for the specific language governing permissions and
*   limitations under the License.
*
*   @author 7ymekk (7ymekk@gmail.com)
*
************************************************************************/


#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDate>
#ifdef QT_DEBUG
#include <QDebug>
#endif // QT_DEBUG
#include <QDialog>
#include <QSettings>
#include "ui_aboutdialog.h"

//https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=5P6GM8DLCVMM6
class AboutDialog : public QDialog,  public Ui::AboutDialog
{
    Q_OBJECT

public:
    AboutDialog ( QWidget *parent = 0 );

};

#endif // ABOUTDIALOG_H
#endif // header guard

