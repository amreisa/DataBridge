#ifndef HEADER_350C52F6261312B4
#define HEADER_350C52F6261312B4

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


#ifndef APPLICATION_H

#include <QApplication>
#include <QHash>
#include <QStringList>
class QDir;
class QTranslator;

typedef QHash<QString, QTranslator*> Translators;

class Application : public QApplication
{
    Q_OBJECT

public:
    explicit Application ( int& argc, char* argv[] );
    ~Application();

    static void loadTranslations ( const QString& dir );
    //        static void loadTranslations(const QDir& dir);
    static const QStringList availableLanguagesRes();
    static const QStringList availableLanguagesDir();

public slots:
    static void setLanguage ( const QString& locale, QString source );

private:
    static QTranslator* current;
    static Translators translatorsRes, translatorsDir;
};

#endif // APPLICATION_H
#endif // header guard 

