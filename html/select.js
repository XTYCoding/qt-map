function makePair(points_selected){
    point_pairs = [];
    for(let i = 0;i<points_selected.length;i++){
        var point_1 = points_selected[i];
        var lnglat_1 = point_1.lnglat;
        var yaw_1 = point_1.yaw;
        var point_pair = [];
        for(let j = i+1;j<points_selected.length;j++){
            var point_2 = points_selected[j];
            var lnglat_2 = point_2.lnglat;
            var yaw_2 = point_2.yaw;
            var distance = AMap.GeometryUtil.distance(lnglat_1, lnglat_2);//计算两点间距离
            if(distance<20&&Math.abs(yaw_1-yaw_2)<0.5235){
                point_pair.push(point_1);
                point_pair.push(point_2);
                point_pairs.push(point_pair);
            }
        } 
    }
    return point_pairs;
}

function makePairList(points_pair,circleId){
    var pairs = [];
     for(let i = 0;i<points_pair.length;i++){
        var point_1 = points_pair[i][0];
        var point_2 = points_pair[i][1];
        var pair = circleId+','+point_1.id+','+point_2.id;
        pairs.push(pair);
    }
    return pairs;
}

function select(){
    mouseTool.close(true);
    var points_selected = [];
    for(let i = 0;i<circles.length;i++){
        circle = circles[i];
        for(let j = 0;j<points.length;j++){
            point = points[j];
            if(circle.contains(point.lnglat)){
                points_selected.push(point);
            }
        }
        var points_pair = makePair(points_selected);
        var pairs = makePairList(points_pair,i+1);
        for(let j = 0;j<pairs.length;j++){
            foo.rcvdata(pairs[j],1);
        }
    }
}