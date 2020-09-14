/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QAction *actionReload;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *PB_back;
    QPushButton *PB_find;
    QLabel *label_crest;
    QFrame *returnFrame;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label_5;
    QDateEdit *departDate_2;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QRadioButton *RB_round_trip;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *RB_one_way;
    QFrame *toFromFrame;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_plane;
    QComboBox *comboBox;
    QLabel *label_to;
    QLabel *label_from;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_point;
    QComboBox *comboBox_2;
    QFrame *departFrame;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *label_4;
    QDateEdit *departDate;
    QLabel *label_names;
    QLabel *label_MCK;
    QWidget *page_2;
    QLabel *label_names_2;
    QLabel *label_MCK_2;
    QPushButton *PB_reserve;
    QLabel *label_3;
    QLabel *label_Create;
    QLabel *label_6;
    QLineEdit *lineEdit_newPW;
    QLineEdit *lineEdit_newUser;
    QLineEdit *lineEdit_confirmPw;
    QPushButton *PB_submit;
    QLabel *label;
    QLineEdit *lineEdit_PW;
    QLineEdit *lineEdit_user;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(781, 437);
        MainWindow->setMinimumSize(QSize(781, 437));
        MainWindow->setMaximumSize(QSize(781, 437));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(136, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/crest.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(30, 50));
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QStringLiteral("actionReload"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(781, 411));
        centralWidget->setMaximumSize(QSize(781, 411));
        centralWidget->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(11, -3, 770, 451));
        stackedWidget->setMinimumSize(QSize(770, 437));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer = new QSpacerItem(68, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        PB_back = new QPushButton(frame_2);
        PB_back->setObjectName(QStringLiteral("PB_back"));
        QFont font;
        font.setPointSize(10);
        PB_back->setFont(font);

        gridLayout_4->addWidget(PB_back, 3, 0, 1, 1);

        PB_find = new QPushButton(frame_2);
        PB_find->setObjectName(QStringLiteral("PB_find"));
        QPalette palette1;
        QBrush brush2(QColor(144, 152, 157, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        PB_find->setPalette(palette1);
        PB_find->setFont(font);
        PB_find->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(PB_find, 1, 0, 1, 1);

        label_crest = new QLabel(frame_2);
        label_crest->setObjectName(QStringLiteral("label_crest"));
        label_crest->setMinimumSize(QSize(141, 181));
        label_crest->setMaximumSize(QSize(141, 181));
        label_crest->setPixmap(QPixmap(QString::fromUtf8(":/img/img/crest.png")));
        label_crest->setScaledContents(true);

        gridLayout_4->addWidget(label_crest, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_2, 0, 2, 2, 1);

        returnFrame = new QFrame(page);
        returnFrame->setObjectName(QStringLiteral("returnFrame"));
        returnFrame->setFrameShape(QFrame::StyledPanel);
        returnFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(returnFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_7 = new QLabel(returnFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(31, 31));
        label_7->setMaximumSize(QSize(31, 31));
        QPalette palette2;
        QBrush brush3(QColor(252, 191, 96, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_7->setPalette(palette2);
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Calendar.png")));
        label_7->setScaledContents(true);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_5 = new QLabel(returnFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_5->setPalette(palette3);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        label_5->setFont(font2);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        departDate_2 = new QDateEdit(returnFrame);
        departDate_2->setObjectName(QStringLiteral("departDate_2"));
        departDate_2->setMinimumSize(QSize(0, 31));
        QPalette palette4;
        QBrush brush5(QColor(160, 160, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        QBrush brush6(QColor(0, 120, 215, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        departDate_2->setPalette(palette4);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        departDate_2->setFont(font3);
        departDate_2->setCalendarPopup(true);
        departDate_2->setDate(QDate(2020, 1, 20));

        gridLayout_2->addWidget(departDate_2, 1, 0, 1, 2);


        gridLayout_8->addWidget(returnFrame, 1, 1, 1, 1);

        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette5;
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_8->setPalette(palette5);
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        label_8->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 5);

        RB_round_trip = new QRadioButton(frame);
        RB_round_trip->setObjectName(QStringLiteral("RB_round_trip"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        RB_round_trip->setPalette(palette6);
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        RB_round_trip->setFont(font4);

        gridLayout_6->addWidget(RB_round_trip, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        RB_one_way = new QRadioButton(frame);
        RB_one_way->setObjectName(QStringLiteral("RB_one_way"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        RB_one_way->setPalette(palette7);
        RB_one_way->setFont(font4);

        gridLayout_6->addWidget(RB_one_way, 1, 3, 1, 1);

        toFromFrame = new QFrame(frame);
        toFromFrame->setObjectName(QStringLiteral("toFromFrame"));
        toFromFrame->setFrameShape(QFrame::StyledPanel);
        toFromFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(toFromFrame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(137, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 5, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(134, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 2);

        label_plane = new QLabel(toFromFrame);
        label_plane->setObjectName(QStringLiteral("label_plane"));
        label_plane->setMinimumSize(QSize(31, 31));
        label_plane->setMaximumSize(QSize(31, 31));
        label_plane->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Plane.png")));
        label_plane->setScaledContents(true);

        gridLayout_3->addWidget(label_plane, 2, 4, 1, 1);

        comboBox = new QComboBox(toFromFrame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 0));
        comboBox->setMaximumSize(QSize(16777215, 31));
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(comboBox, 3, 0, 1, 7);

        label_to = new QLabel(toFromFrame);
        label_to->setObjectName(QStringLiteral("label_to"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_to->setPalette(palette8);
        label_to->setFont(font2);

        gridLayout_3->addWidget(label_to, 2, 2, 1, 2);

        label_from = new QLabel(toFromFrame);
        label_from->setObjectName(QStringLiteral("label_from"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_from->setPalette(palette9);
        label_from->setFont(font2);

        gridLayout_3->addWidget(label_from, 0, 3, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(124, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(124, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label_point = new QLabel(toFromFrame);
        label_point->setObjectName(QStringLiteral("label_point"));
        label_point->setMinimumSize(QSize(21, 31));
        label_point->setMaximumSize(QSize(21, 31));
        label_point->setPixmap(QPixmap(QString::fromUtf8(":/img/img/From.png")));
        label_point->setScaledContents(true);

        gridLayout_3->addWidget(label_point, 0, 1, 1, 2);

        comboBox_2 = new QComboBox(toFromFrame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 0));
        comboBox_2->setMaximumSize(QSize(16777215, 31));
        comboBox_2->setFont(font3);
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(comboBox_2, 1, 0, 1, 7);


        gridLayout_6->addWidget(toFromFrame, 2, 0, 1, 5);


        gridLayout_8->addWidget(frame, 0, 0, 1, 2);

        departFrame = new QFrame(page);
        departFrame->setObjectName(QStringLiteral("departFrame"));
        departFrame->setFrameShape(QFrame::StyledPanel);
        departFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(departFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_11 = new QLabel(departFrame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(31, 31));
        label_11->setMaximumSize(QSize(31, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_11->setPalette(palette10);
        label_11->setFont(font1);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Calendar.png")));
        label_11->setScaledContents(true);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        label_4 = new QLabel(departFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_4->setPalette(palette11);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        departDate = new QDateEdit(departFrame);
        departDate->setObjectName(QStringLiteral("departDate"));
        departDate->setMinimumSize(QSize(0, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        departDate->setPalette(palette12);
        departDate->setFont(font3);
        departDate->setDateTime(QDateTime(QDate(2000, 3, 1), QTime(4, 0, 0)));
        departDate->setCalendarPopup(true);

        gridLayout->addWidget(departDate, 1, 0, 1, 2);


        gridLayout_8->addWidget(departFrame, 1, 0, 1, 1);

        label_names = new QLabel(page);
        label_names->setObjectName(QStringLiteral("label_names"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_names->setPalette(palette13);
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        label_names->setFont(font5);
        label_names->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_8->addWidget(label_names, 3, 0, 1, 2);

        label_MCK = new QLabel(page);
        label_MCK->setObjectName(QStringLiteral("label_MCK"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_MCK->setPalette(palette14);
        label_MCK->setFont(font5);
        label_MCK->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_8->addWidget(label_MCK, 3, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_names_2 = new QLabel(page_2);
        label_names_2->setObjectName(QStringLiteral("label_names_2"));
        label_names_2->setGeometry(QRect(0, 390, 521, 21));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_names_2->setPalette(palette15);
        label_names_2->setFont(font5);
        label_names_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_MCK_2 = new QLabel(page_2);
        label_MCK_2->setObjectName(QStringLiteral("label_MCK_2"));
        label_MCK_2->setGeometry(QRect(510, 390, 245, 21));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_MCK_2->setPalette(palette16);
        label_MCK_2->setFont(font5);
        label_MCK_2->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        PB_reserve = new QPushButton(page_2);
        PB_reserve->setObjectName(QStringLiteral("PB_reserve"));
        PB_reserve->setGeometry(QRect(450, 300, 271, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        PB_reserve->setPalette(palette17);
        PB_reserve->setFont(font);
        PB_reserve->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, -10, 381, 431));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(252, 191, 96);"));
        label_Create = new QLabel(page_2);
        label_Create->setObjectName(QStringLiteral("label_Create"));
        label_Create->setGeometry(QRect(450, 10, 271, 61));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_Create->setPalette(palette18);
        QFont font6;
        font6.setFamily(QStringLiteral("Myanmar Text"));
        font6.setPointSize(25);
        font6.setBold(true);
        font6.setWeight(75);
        label_Create->setFont(font6);
        label_Create->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 70, 271, 61));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_6->setPalette(palette19);
        label_6->setFont(font6);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lineEdit_newPW = new QLineEdit(page_2);
        lineEdit_newPW->setObjectName(QStringLiteral("lineEdit_newPW"));
        lineEdit_newPW->setGeometry(QRect(450, 190, 271, 40));
        lineEdit_newPW->setMinimumSize(QSize(271, 40));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setWeight(50);
        lineEdit_newPW->setFont(font7);
        lineEdit_newPW->setEchoMode(QLineEdit::Password);
        lineEdit_newUser = new QLineEdit(page_2);
        lineEdit_newUser->setObjectName(QStringLiteral("lineEdit_newUser"));
        lineEdit_newUser->setGeometry(QRect(450, 140, 271, 40));
        lineEdit_newUser->setMinimumSize(QSize(271, 40));
        lineEdit_newUser->setFont(font7);
        lineEdit_confirmPw = new QLineEdit(page_2);
        lineEdit_confirmPw->setObjectName(QStringLiteral("lineEdit_confirmPw"));
        lineEdit_confirmPw->setGeometry(QRect(450, 240, 271, 40));
        lineEdit_confirmPw->setMinimumSize(QSize(271, 40));
        lineEdit_confirmPw->setFont(font7);
        lineEdit_confirmPw->setEchoMode(QLineEdit::Password);
        PB_submit = new QPushButton(page_2);
        PB_submit->setObjectName(QStringLiteral("PB_submit"));
        PB_submit->setGeometry(QRect(60, 250, 271, 30));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        PB_submit->setPalette(palette20);
        PB_submit->setFont(font);
        PB_submit->setStyleSheet(QStringLiteral(""));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 170, 103));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label->setPalette(palette21);
        QFont font8;
        font8.setFamily(QStringLiteral("Myanmar Text"));
        font8.setPointSize(35);
        font8.setBold(true);
        font8.setWeight(75);
        label->setFont(font8);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lineEdit_PW = new QLineEdit(page_2);
        lineEdit_PW->setObjectName(QStringLiteral("lineEdit_PW"));
        lineEdit_PW->setGeometry(QRect(60, 190, 271, 40));
        lineEdit_PW->setMinimumSize(QSize(271, 40));
        lineEdit_PW->setFont(font7);
        lineEdit_PW->setEchoMode(QLineEdit::Password);
        lineEdit_user = new QLineEdit(page_2);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(60, 140, 271, 40));
        lineEdit_user->setMinimumSize(QSize(271, 40));
        lineEdit_user->setFont(font7);
        stackedWidget->addWidget(page_2);
        label_3->raise();
        label_names_2->raise();
        label_MCK_2->raise();
        PB_reserve->raise();
        label_Create->raise();
        label_6->raise();
        lineEdit_newPW->raise();
        lineEdit_newUser->raise();
        lineEdit_confirmPw->raise();
        PB_submit->raise();
        label->raise();
        lineEdit_PW->raise();
        lineEdit_user->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 781, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionexit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MCK Technologies", nullptr));
        actionexit->setText(QApplication::translate("MainWindow", "exit", nullptr));
        actionReload->setText(QApplication::translate("MainWindow", "Reload", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("MainWindow", "Reload", nullptr));
#endif // QT_NO_TOOLTIP
        PB_back->setText(QApplication::translate("MainWindow", "Back", nullptr));
        PB_find->setText(QApplication::translate("MainWindow", "Find", nullptr));
        label_crest->setText(QString());
        label_7->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "RETURN", nullptr));
        departDate_2->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "FLIGHT RESERVATION", nullptr));
        RB_round_trip->setText(QApplication::translate("MainWindow", "Round-trip", nullptr));
        RB_one_way->setText(QApplication::translate("MainWindow", "One-way", nullptr));
        label_plane->setText(QString());
        comboBox->setItemText(0, QApplication::translate("MainWindow", "TURKEY", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "TORONTO", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "MIAMI", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "TURKEY", nullptr));
        label_to->setText(QApplication::translate("MainWindow", "TO", nullptr));
        label_from->setText(QApplication::translate("MainWindow", "FROM", nullptr));
        label_point->setText(QString());
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "TORONTO", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "TURKEY", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "MIAMI", nullptr));

        comboBox_2->setCurrentText(QApplication::translate("MainWindow", "TORONTO", nullptr));
        label_11->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "DEPART", nullptr));
        departDate->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        label_names->setText(QApplication::translate("MainWindow", "Feras Kahwaji, Oguzhan Cetin, Giovanni McLeish, Zheng Tan", nullptr));
        label_MCK->setText(QApplication::translate("MainWindow", "\302\251 2018 MCK Technologies", nullptr));
        label_names_2->setText(QApplication::translate("MainWindow", "Feras Kahwaji, Oguzhan Cetin, Giovanni McLeish, Zheng Tan", nullptr));
        label_MCK_2->setText(QApplication::translate("MainWindow", "\302\251 2018 MCK Technologies", nullptr));
        PB_reserve->setText(QApplication::translate("MainWindow", "Reserve a Flight!", nullptr));
        label_3->setText(QString());
        label_Create->setText(QApplication::translate("MainWindow", "Create An", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Account", nullptr));
        lineEdit_newPW->setPlaceholderText(QApplication::translate("MainWindow", "new password", nullptr));
        lineEdit_newUser->setPlaceholderText(QApplication::translate("MainWindow", "new username", nullptr));
        lineEdit_confirmPw->setPlaceholderText(QApplication::translate("MainWindow", "confirm password", nullptr));
        PB_submit->setText(QApplication::translate("MainWindow", "SUBMIT", nullptr));
        label->setText(QApplication::translate("MainWindow", "Log In", nullptr));
        lineEdit_PW->setPlaceholderText(QApplication::translate("MainWindow", "password", nullptr));
        lineEdit_user->setPlaceholderText(QApplication::translate("MainWindow", "username", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
