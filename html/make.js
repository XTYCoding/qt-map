// function draw(type){
//     switch(type){
//       case 'marker':{
//           mouseTool.marker({
//             icon: startIcon,
//             anchor: new AMap.Pixel(6, 6),
//           });
//           break;
//       }
//       case 'circle':{
//           mouseTool.circle({
//             fillColor:'#00b0ff',
//             strokeColor:'#80d8ff'
//             //同Circle的Option设置
//           });
//       }
//     }
//   }


function addNode(marker,nodeList){
    var lnglat = marker.getPosition().getLng()+','+marker.getPosition().getLat();
    nodeList.push(lnglat); 
}

function makelist(nodeList){
    for(let i = 0;i<nodeList.length-1;i++){
       var lnglat1 = [nodeList[i].split(",")[0],nodeList[i].split(",")[1]];
       var lnglat2 = [nodeList[i+1].split(",")[0],nodeList[i+1].split(",")[1]];
       var distance = AMap.GeometryUtil.distance(lnglat1, lnglat2);//计算两点间距离
       nodeList[i]+=',';
       nodeList[i]+=distance;
    }
}

// var mark=function(){
//       for(var i=0;i<radios.length;i+=1){
//           radios[i].onchange = function(e){
//             draw('marker')
//           }
//       }
//       draw('marker')
//       map.on('click', makenodelist);
//   }