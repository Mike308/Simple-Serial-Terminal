import QtQuick 2.7

Page1Form {

    Connections {

        target: serialTerminal

        onGetData: {

            terminal.append("<"+data);
        }

    }

    sendBtn.onClicked: {

        terminal.append(">"+dataToSend.text)
        serialTerminal.writeToSerialPortSlot(dataToSend.text+"\r\n")
    }


    connectBtn.onClicked: {

        if (serialTerminal.getConnectionStatusSlot() === false){
            serialTerminal.openSerialPortSlot(serialPorts.currentText,serialPorts.currentText)
            connectBtn.text = "Disconnect"
        }else {

            serialTerminal.closeSerialPortSlot();
            connectBtn.text = "Connect"
        }

    }



}
