import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    visible: true
    width: 720
    height: 480
    maximumHeight: 480
    maximumWidth: 720
    minimumWidth: 720
    minimumHeight: 480

    title: qsTr("Serial Terminal")





        Page1 {


        }


    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("Terminal")
        }

    }
}
