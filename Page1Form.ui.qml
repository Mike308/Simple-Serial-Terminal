import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {

    property alias sendBtn: sendBtn
    property alias terminal: terminal
    property alias dataToSend: dataToSend
    property alias connectBtn: connectBtn


    Row {

        spacing: 40

        Column {

            y: 40


            Flickable {

                clip: true

                width: 500
                height: 100




            TextArea.flickable: TextArea {

                id: terminal
                wrapMode: TextArea.Wrap

                placeholderText:  "Waiting..."
                width: 500
                height: 100









            }




            }














            TextField {

                id: dataToSend
                placeholderText:  "Data to send..."
                width: 500

            }

            Button {

                id: sendBtn
                text: qsTr("Send")
                anchors.top: connectBtn.anchors.top

            }




        }

        Column {

            y: 40

            Label{

                text: qsTr("Serial port: ")
            }

            ComboBox {

                id: serialPorts
                width: 50

            }

            Label {

                text: qsTr("Baud: ")
            }

            ComboBox {

                id: baudRate
                width: 50

            }

            Button {

                id: connectBtn
                text: qsTr("Connect")

            }




        }



    }


}
