var point_style = [{
    url: 'https://a.amap.com/jsapi_demos/static/images/mass0.png',
        anchor: new AMap.Pixel(3, 3),
        size: new AMap.Size(5, 5)
    }, {
    url: 'https://a.amap.com/jsapi_demos/static/images/mass1.png',
        anchor: new AMap.Pixel(3, 3),
        size: new AMap.Size(5, 5)
    }, {
    url: 'https://a.amap.com/jsapi_demos/static/images/mass2.png',
        anchor: new AMap.Pixel(3, 3),
        size: new AMap.Size(5, 5)
    }
];

var startIcon = new AMap.Icon({
    // 图标的取图地址
    image: 'https://a.amap.com/jsapi_demos/static/images/mass0.png',
    // 图标所用图片大小
    imageSize: new AMap.Size(8, 8),
});

