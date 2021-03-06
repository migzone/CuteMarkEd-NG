/*
 * Copyright 2014 Christian Loose <christian.loose@hamburg.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef HTMLVIEWSYNCHRONIZER_H
#define HTMLVIEWSYNCHRONIZER_H

#include "viewsynchronizer.h"


class HtmlViewSynchronizer : public ViewSynchronizer
{
    Q_OBJECT

public:
    HtmlViewSynchronizer(QWebEngineView *webView, QPlainTextEdit *editor);
    ~HtmlViewSynchronizer();

public slots:
    void webViewScrolled();
    void rememberScrollBarPos();

private slots:
    void scrollValueChanged(int value);
    void htmlContentSizeChanged();

private:
    int scrollBarPos;

    double maxScrollBar;
    void setMaxScrollBar(double);
    double getMaxScrollBar() const;
};

#endif // HTMLVIEWSYNCHRONIZER_H

