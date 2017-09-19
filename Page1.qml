import QtQuick 2.7

Page1Form {

    sendBtn.onClicked: {

        terminal.append(">"+dataToSend.text)
        serialTerminal.writeToSerialPortSlot(dataToSend.text+"\r\n")
    }


    connectBtn.onClicked: {

        serialTerminal.openSerialPortSlot("COM16",9600)

    }



}
