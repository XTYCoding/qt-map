var recDatagcj=function(numlist)
{
    var num_list=numlist.substring(1,numlist.length-1);
    var id = num_list.split(",")[0];
    var longtitude = num_list.split(",")[1];
    var latitude = num_list.split(",")[2];
    var yaw = num_list.split(",")[3];
    var roll = num_list.split(",")[4];
    var pitch = num_list.split(",")[5];
    var lonlat=[];
    var i = parseInt(id);
    var lon = parseFloat(longtitude);
    var lat = parseFloat(latitude);
    var ya = parseFloat(yaw);
    var rol = parseFloat(roll);
    var pit = parseFloat(pitch);
    var lonlat=[lon,lat];
    var point = {lnglat:[],id:i,yaw:ya,roll:rol,pitch:pit,style:3};
    point.lnglat=lonlat;
    points.push(point);
}


    //创建wgs系的海量点数组
var recDataWgs=function(numlist,fr)
{
    var num_list=numlist.substring(1,numlist.length-1);
    var id = num_list.split(",")[0];
    var longtitude = num_list.split(",")[1];
    var latitude = num_list.split(",")[2];
    var yaw = num_list.split(",")[3];
    var roll = num_list.split(",")[4];
    var pitch = num_list.split(",")[5];
    var lonlat=[];
    var i = parseInt(id);
    var lon = parseFloat(longtitude);
    var lat = parseFloat(latitude);
    var ya = parseFloat(yaw);
    var rol = parseFloat(roll);
    var pit = parseFloat(pitch);
    lonlat = new WGS84_to_GCJ02().transform(lon,lat); 
    var point = {lnglat:[],id:i,yaw:ya,roll:rol,pitch:pit,style:0};
    point.lnglat=lonlat;
    points.push(point);
}

var setPoints=function(fr){
    sub_points=[];
    if(points.length==0)
       alert("empty");
    if(fr!=0){
        for(var i = 0,len = points.length;i<len;i+=fr){
            sub_points.push(points[i]);
        }
        points=sub_points;
    }
    mass.setData(points);
    mass.setMap(map);
}

   //展示轨迹
var showPoints=function(){
    mass.show();
}

var hidePoints=function(){
    mass.hide();
}


