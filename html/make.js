function draw(type){
    switch(type){
      case 'marker':{
          mouseTool.marker({
            icon: startIcon,
            anchor: new AMap.Pixel(6, 6),
          });
          break;
      }
      case 'circle':{
          mouseTool.circle({
            fillColor:'#00b0ff',
            strokeColor:'#80d8ff'
            //同Circle的Option设置
          });
      }
    }
  }

function makenodelist(e){
    var lonlat = e.lnglat.getLng()+','+e.lnglat.getLat();
    nodelist.push(lonlat); 
}

function makelist(){
    for(let i = 0;i<nodelist.length-1;i++){
       var lonlat1 = [nodelist[i].split(",")[0],nodelist[i].split(",")[1]];
       var lonlat2 = [nodelist[i+1].split(",")[0],nodelist[i+1].split(",")[1]];
       var distance = AMap.GeometryUtil.distance(lonlat1, lonlat2);//计算两点间距离
       nodelist[i]+=',';
       nodelist[i]+=distance;
    }
}

var mark=function(){
    //切换选项卡
      document.getElementById("pointstylecard").style.display="none";
      document.getElementById("circle").style.display="none";
      document.getElementById("point").style.display="";
      document.getElementById("drawcard").style.display="";
      for(var i=0;i<radios.length;i+=1){
          radios[i].onchange = function(e){
            draw('marker')
          }
      }
      draw('marker')
      map.on('click', makenodelist);
  }