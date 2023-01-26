function draw(type){
    switch(type){
      case 'marker':{
        mouseTool = new AMap.MouseTool(map)
        mouseTool.marker({//开启绘制点功能
            icon:startIcon,
        });
        mouseTool.on('draw', function(event) {//绑定信号 绘制后将点传给addNode 
            // event.obj 为绘制出来的覆盖物对象
            overlays.push(event.obj);
            addNode(event.obj);
        });
        break;
      }
      case 'circle':{
        mouseTool = new AMap.MouseTool(map)
        mouseTool.circle();
        mouseTool.on('draw',function(event){
          circles.push(event.obj);
        });
        circles=[];
      }
    }
  }

  function num(){
    alert('point: '+overlays.length+'cicle: '+circles.length);
  }

