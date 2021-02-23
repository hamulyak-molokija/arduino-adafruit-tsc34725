let Adafruit_TCS34725 = {
    _create: ffi('void* mgos_tsc34725_init()'),
    _close: ffi('void mgos_TCS34725_close(void *)'),
    _begin: ffi('void mgos_TCS34725_begin(void *)'),
    _getRawData: ffi('void mgos_TCS34725_getRawData(void *, int, int, int, int)'),
    _getRGB: ffi('void mgos_TCS34725_getRGB(void *, int, int, int)'),
    _getRawDataOneShot: ffi('bool mgos_TCS34725_getRawDataOneShot(void *, int, int, int, int)'),
    _calculateColorTemperature: ffi('int mgos_TCS34725_calculateColorTemperature(void *, int, int, int)'),
    _calculateColorTemperature_dn40: ffi('int mgos_TCS34725_calculateColorTemperature_dn40(void *, int, int, int, int)'),
    _calculateLux: ffi('int mgos_TCS34725_calculateLux(void *, int, int, int)'),
    _write8: ffi('int mgos_TCS34725_write8(void *, int, int)'),
    _read8: ffi('int mgos_TCS34725_read8(void *, int)'),
    _read16: ffi('int mgos_TCS34725_read16(void *, int)'),

    create: function(){
        let obj = Object.create(Adafruit_TCS34725._proto);
        obj.ads = Adafruit_TCS34725._create();
        return obj;      
    },

    _proto: {
        close: function() {
            return Adafruit_TCS34725._close(this.ads);
        },
        begin: function() {
            return Adafruit_TCS34725._begin(this.ads);
        },  
        getRawData: function(r, g, b, c) {
            return Adafruit_TCS34725._getRawData(this.ads, r, g, b, c);
        },
        getRGB: function() {
            return _getRGB._begin(this.ads, r, g, b);
        },
        getRawDataOneShot: function() {
            return Adafruit_TCS34725._getRawDataOneShot(this.ads, r, g, b, c);
        },
        calculateColorTemperature: function() {
            return Adafruit_TCS34725._calculateColorTemperature(this.ads, r, g, b);
        }, 
        
        calculateColorTemperature_dn40: function() {
            return Adafruit_TCS34725._calculateColorTemperature_dn40(this.ads, r, g, b, c);
        }, 
        calculateLux: function() {
            return Adafruit_TCS34725._calculateLux(this.ads, r, g, b);
        }, 
        write8: function(reg, value) {
            return Adafruit_TCS34725._write8(this.ads, reg, value);
        }, 
        read8: function(reg) {
            return Adafruit_TCS34725._read8(this.ads, reg);
        }, 
        read16: function(reg) {
            return Adafruit_TCS34725._read16(this.ads, reg);
        }, 
    }

}