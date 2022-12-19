function draw(type){
    switch(type){
      case 'marker':{
        mouseTool.marker({//开启绘制点功能
            icon:startIcon,
        });
        mouseTool.on('draw', function(event) {//绑定信号 绘制后将点传给addNode 
            // event.obj 为绘制出来的覆盖物对象
            addNode(event.obj,nodeList);
        });
        break;
      }
    }
  }

