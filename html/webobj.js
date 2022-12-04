new QWebChannel(qt.webChannelTransport,
  function(channel){
  var webobj = channel.objects.webobj;//QT里注册到Webchannel的类
  window.foo = webobj;
  //绑定QT信号和JS函数
  foo.jscallme();
  webobj.sendToJs_WGS.connect(recDataWgs);
  webobj.jsShow.connect(showData);
});