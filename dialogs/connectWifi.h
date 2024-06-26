#ifndef HEADER_56630B1484125F27
#define HEADER_56630B1484125F27

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


#ifndef POLACZ_H
#define POLACZ_H
//
#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include "ui_connectWifi.h"

class ConnectWifi : public QDialog, public Ui::ConnectWifi
{
    Q_OBJECT
public:
    ConnectWifi ( QWidget * parent = 0 );
};
#endif




#endif // header guard

