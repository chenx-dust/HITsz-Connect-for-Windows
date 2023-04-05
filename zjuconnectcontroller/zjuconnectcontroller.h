#ifndef ZJUCONNECTCONTROLLER_H
#define ZJUCONNECTCONTROLLER_H

#include <QtCore>

class ZjuConnectController : public QObject
{
Q_OBJECT

public:
    ZjuConnectController();

    ~ZjuConnectController();

    void start(
        const QString &program,
        const QString &username,
        const QString &password,
        const QString &server = "",
        int port = 0,
        bool disableMultiLine = false,
        bool proxyAll = false,
        const QString &socksBind = "",
        const QString &httpBind = "",
        bool debugDump = false,
        const QString &tcpPortForwarding = "",
        const QString &udpPortForwarding = ""
    );

    void stop();


signals:

    void loginFailed();

    void outputRead(const QString &output);

    void finished();

private:
    QProcess *zjuConnectProcess;

};

#endif //ZJUCONNECTCONTROLLER_H