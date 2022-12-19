new QWebChannel(qt.webChannelTransport,
  function(channel){
  var webobj = channel.objects.webobj;//QT里注册到Webchannel的类
  window.foo = webobj;
  //绑定QT信号和JS函数
  webobj.sendToJs_WGS.connect(recDataWgs);
  webobj.jsShow.connect(showPoints);
  webobj.generateFile.connect(generateList);
  webobj.startDraw.connect(draw);
});