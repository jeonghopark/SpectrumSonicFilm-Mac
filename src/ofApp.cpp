#include "ofApp.h"

float sines[514]={0,0.012268,0.024536,0.036804,0.049042,0.06131,0.073547,0.085785,0.097992,0.1102,0.12241,0.13455,0.1467,0.15884,0.17093,0.18301,0.19507,0.20709,0.21909,0.23105,0.24295,0.25485,0.26669,0.2785,0.29025,0.30197,0.31366,0.32529,0.33685,0.34839,0.35986,0.37128,0.38266,0.39395,0.40521,0.41641,0.42752,0.4386,0.44958,0.46051,0.47137,0.48215,0.49286,0.50351,0.51407,0.52457,0.53497,0.54529,0.55554,0.5657,0.57578,0.58575,0.59567,0.60547,0.6152,0.62482,0.63437,0.6438,0.65314,0.66238,0.67151,0.68057,0.68951,0.69833,0.70706,0.7157,0.72421,0.7326,0.74091,0.74908,0.75717,0.76514,0.77298,0.7807,0.7883,0.79581,0.80316,0.81042,0.81754,0.82455,0.83142,0.8382,0.84482,0.85132,0.8577,0.86392,0.87006,0.87604,0.88187,0.8876,0.89319,0.89862,0.90396,0.90912,0.91415,0.91907,0.92383,0.92847,0.93295,0.93729,0.9415,0.94556,0.94949,0.95325,0.95691,0.96039,0.96375,0.96692,0.97,0.9729,0.97565,0.97827,0.98074,0.98306,0.98523,0.98724,0.98914,0.99084,0.99243,0.99387,0.99515,0.99628,0.99725,0.99808,0.99875,0.99927,0.99966,0.99988,0.99997,0.99988,0.99966,0.99927,0.99875,0.99808,0.99725,0.99628,0.99515,0.99387,0.99243,0.99084,0.98914,0.98724,0.98523,0.98306,0.98074,0.97827,0.97565,0.9729,0.97,0.96692,0.96375,0.96039,0.95691,0.95325,0.94949,0.94556,0.9415,0.93729,0.93295,0.92847,0.92383,0.91907,0.91415,0.90912,0.90396,0.89862,0.89319,0.8876,0.88187,0.87604,0.87006,0.86392,0.8577,0.85132,0.84482,0.8382,0.83142,0.82455,0.81754,0.81042,0.80316,0.79581,0.7883,0.7807,0.77298,0.76514,0.75717,0.74908,0.74091,0.7326,0.72421,0.7157,0.70706,0.69833,0.68951,0.68057,0.67151,0.66238,0.65314,0.6438,0.63437,0.62482,0.6152,0.60547,0.59567,0.58575,0.57578,0.5657,0.55554,0.54529,0.53497,0.52457,0.51407,0.50351,0.49286,0.48215,0.47137,0.46051,0.44958,0.4386,0.42752,0.41641,0.40521,0.39395,0.38266,0.37128,0.35986,0.34839,0.33685,0.32529,0.31366,0.30197,0.29025,0.2785,0.26669,0.25485,0.24295,0.23105,0.21909,0.20709,0.19507,0.18301,0.17093,0.15884,0.1467,0.13455,0.12241,0.1102,0.097992,0.085785,0.073547,0.06131,0.049042,0.036804,0.024536,0.012268,0,-0.012268,-0.024536,-0.036804,-0.049042,-0.06131,-0.073547,-0.085785,-0.097992,-0.1102,-0.12241,-0.13455,-0.1467,-0.15884,-0.17093,-0.18301,-0.19507,-0.20709,-0.21909,-0.23105,-0.24295,-0.25485,-0.26669,-0.2785,-0.29025,-0.30197,-0.31366,-0.32529,-0.33685,-0.34839,-0.35986,-0.37128,-0.38266,-0.39395,-0.40521,-0.41641,-0.42752,-0.4386,-0.44958,-0.46051,-0.47137,-0.48215,-0.49286,-0.50351,-0.51407,-0.52457,-0.53497,-0.54529,-0.55554,-0.5657,-0.57578,-0.58575,-0.59567,-0.60547,-0.6152,-0.62482,-0.63437,-0.6438,-0.65314,-0.66238,-0.67151,-0.68057,-0.68951,-0.69833,-0.70706,-0.7157,-0.72421,-0.7326,-0.74091,-0.74908,-0.75717,-0.76514,-0.77298,-0.7807,-0.7883,-0.79581,-0.80316,-0.81042,-0.81754,-0.82455,-0.83142,-0.8382,-0.84482,-0.85132,-0.8577,-0.86392,-0.87006,-0.87604,-0.88187,-0.8876,-0.89319,-0.89862,-0.90396,-0.90912,-0.91415,-0.91907,-0.92383,-0.92847,-0.93295,-0.93729,-0.9415,-0.94556,-0.94949,-0.95325,-0.95691,-0.96039,-0.96375,-0.96692,-0.97,-0.9729,-0.97565,-0.97827,-0.98074,-0.98306,-0.98523,-0.98724,-0.98914,-0.99084,-0.99243,-0.99387,-0.99515,-0.99628,-0.99725,-0.99808,-0.99875,-0.99927,-0.99966,-0.99988,-0.99997,-0.99988,-0.99966,-0.99927,-0.99875,-0.99808,-0.99725,-0.99628,-0.99515,-0.99387,-0.99243,-0.99084,-0.98914,-0.98724,-0.98523,-0.98306,-0.98074,-0.97827,-0.97565,-0.9729,-0.97,-0.96692,-0.96375,-0.96039,-0.95691,-0.95325,-0.94949,-0.94556,-0.9415,-0.93729,-0.93295,-0.92847,-0.92383,-0.91907,-0.91415,-0.90912,-0.90396,-0.89862,-0.89319,-0.8876,-0.88187,-0.87604,-0.87006,-0.86392,-0.8577,-0.85132,-0.84482,-0.8382,-0.83142,-0.82455,-0.81754,-0.81042,-0.80316,-0.79581,-0.7883,-0.7807,-0.77298,-0.76514,-0.75717,-0.74908,-0.74091,-0.7326,-0.72421,-0.7157,-0.70706,-0.69833,-0.68951,-0.68057,-0.67151,-0.66238,-0.65314,-0.6438,-0.63437,-0.62482,-0.6152,-0.60547,-0.59567,-0.58575,-0.57578,-0.5657,-0.55554,-0.54529,-0.53497,-0.52457,-0.51407,-0.50351,-0.49286,-0.48215,-0.47137,-0.46051,-0.44958,-0.4386,-0.42752,-0.41641,-0.40521,-0.39395,-0.38266,-0.37128,-0.35986,-0.34839,-0.33685,-0.32529,-0.31366,-0.30197,-0.29025,-0.2785,-0.26669,-0.25485,-0.24295,-0.23105,-0.21909,-0.20709,-0.19507,-0.18301,-0.17093,-0.15884,-0.1467,-0.13455,-0.12241,-0.1102,-0.097992,-0.085785,-0.073547,-0.06131,-0.049042,-0.036804,-0.024536,-0.012268,0,0.012268};




//--------------------------------------------------------------
void ofApp::setup(){

#ifdef OF_RELEASE
    ofSetDataPathRoot("../Resources/data/");
#endif
    
    ofBackground(10);
    ofSetFrameRate(60);
    
    dir.listDir("movies/");
    dir.sort();

    if( dir.size() ){
        movies.assign(dir.size(), ofVideoPlayer());
    }

    for(int i = 0; i < (int)dir.size(); i++){
        movies[i].load(dir.getPath(i));
    }

    
//    moviePlay.load("EpicClouds.mov");
//    moviePlay.setLoopState(OF_LOOP_NORMAL);
//    moviePlay.play();
    
    for (int i=0; i<514 ; i++) {
        sineBufferLeft[i] = sines[i];
        sineBufferRight[i] = sines[i];
    }
    
    ofSoundStreamSetup( 2, 0, this, SAMPLE_RATE, INITIAL_BUFFER_SIZE, 4 );
    ofSoundStreamStop();
    
    bPlaying = false;
    line = 10;
    
    moviePixel.allocate( 1280, 720, OF_IMAGE_COLOR );
    
    screenMiddleX = ofGetWidth()*0.5;
    
    threshold = 0.9;
    maxHertz = 8000;
    minHertz = 50;
    
    fullscreen = false;
    
    gui.setup();
    gui.add(movieChange.setup("MovieChange", false));
    

    movieChange.addListener(this, &ofApp::moviechangePressed);
    movieChangeIndex = 0;

}


//--------------------------------------------------------------
void ofApp::update(){
    
    movies[movieChangeIndex].update();
    movies[movieChangeIndex].play();
    

//    moviePlay.update();
    
    moviePixel.clear();
    moviePlay = movies[movieChangeIndex];
    moviePixel = moviePlay.getPixels();
    
    
    if (moviePlay.isFrameNew()) {
        
        if ( bPlaying ) {
            for(int n = 0;n<BIT;n++){
                int _yRatioLeft = (int)ofMap(n, 0, BIT-1, 0, ofGetHeight());
                int _yRatioRight = (int)ofMap(n, 0, BIT-1, 0, ofGetHeight());
                ampLeft[n] = (ampLeft[n]*line + getAmpLeft(moviePlay.getWidth()*0.25, _yRatioLeft))/(line+1);
                hertzScaleLeft[n] = int(getFreqLeft(n));
                ampRight[n] = (ampRight[n]*line + getAmpRight(moviePlay.getWidth()*0.75, _yRatioRight))/(line+1);
                hertzScaleRight[n] = int(getFreqRight(n));
            }
        }

    }
    
    
}


//--------------------------------------------------------------
void ofApp::moviechangePressed(){

    movieChangeIndex++;
    movieChangeIndex = movieChangeIndex % (int)dir.size();
    

    cout << movieChangeIndex << endl;
    
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    movies[movieChangeIndex].draw( 0, 0, ofGetWidth(), ofGetHeight() );
    
    ofPushStyle();
    ofSetColor(255, 220);
    
    if ( bPlaying ) {
        for(int n=0; n<BIT; n++){
            float _yRatioLeft = ofMap(n, 0, BIT-1, 0, ofGetHeight());
            float _yRatioRight = ofMap(n, 0, BIT-1, 0, ofGetHeight());
            float _spectrumLineLength = 100.0;
            ofDrawRectangle( screenMiddleX*0.5, _yRatioLeft, -ampLeft[n] * _spectrumLineLength, 1 );
            ofDrawRectangle( screenMiddleX*0.5, _yRatioLeft, ampLeft[n] * _spectrumLineLength, 1 );
            ofDrawRectangle( screenMiddleX*1.5, _yRatioRight, -ampRight[n] * _spectrumLineLength, 1 );
            ofDrawRectangle( screenMiddleX*1.5, _yRatioRight, ampRight[n] * _spectrumLineLength, 1 );
        }
    }
    
    ofDrawLine( screenMiddleX*0.5, 0, screenMiddleX*0.5, ofGetHeight() );
    ofDrawLine( screenMiddleX*1.5, 0, screenMiddleX*1.5, ofGetHeight() );
    ofPopStyle();
    
    
    ofDrawBitmapString(ofToString(ofGetFrameRate(),1), 10, 10);
    ofDrawBitmapString("/ Play and Stop : Space Bar", 50, 10);
    
    
    gui.draw();
    
    
}

//--------------------------------------------------------------
void ofApp::exit(){
    
    std::exit(0);
    
    ofSoundStreamStop();
    ofSoundStreamClose();

    movies[movieChangeIndex].stop();
    movies[movieChangeIndex].close();
    

//    gui.clear();
//    
//    dir.close();
//    
//    moviePixel.clear();
//    
//    moviePlay.stop();
//    moviePlay.close();
//    movies.clear();


//    movieChange.removeListener(this, &ofApp::moviechangePressed);
    
}




//--------------------------------------------------------------
float ofApp::getAmpLeft(float x, float y, ofPixels _p){
    
    float _amp = 0;
    
    ofColor _color = _p.getColor(x, y);
    
    float _r = _color.r;
    float _g = _color.g;
    float _b = _color.b;
    
    _amp = 1.0 - (_r + _g + _b) / 255.0 / 3.0;
    
    if (_amp>threshold) {
        _amp = 0;
    }
    
    return _amp;
    
    
}


//--------------------------------------------------------------
float ofApp::getPixelLeft(int x, int y){
    
    
    //    return _sum;
    
}

//--------------------------------------------------------------
float ofApp::getPixelRight(int x, int y){
    
    ofColor _color = moviePixel.getColor(x, y);
    
    float _r = _color.r;
    float _g = _color.g;
    float _b = _color.b;
    
    float _sum = 1.0 - (_r + _g + _b) / 255.0 / 3.0;
    
    return _sum;
    
}



//--------------------------------------------------------------
float ofApp::getAmpLeft(float x, float y){
    
    float _amp = 0;
    
    ofColor _color = moviePixel.getColor(x, y);
    
    float _r = _color.r;
    float _g = _color.g;
    float _b = _color.b;
    
    _amp = 1.0 - (_r + _g + _b) / 255.0 / 3.0;
    
    if (_amp>threshold) {
        _amp = 0;
    }
    
    return _amp;
    
    
}


//--------------------------------------------------------------
float ofApp::getAmpRight(float x, float y){
    
    float _amp = 0;
    _amp = getPixelRight(x, y);
    
    if (_amp>threshold) {
        _amp = 0;
    }
    
    return _amp;
    
    
}

//--------------------------------------------------------------
float ofApp::getFreqLeft(float y){
    float freq=0;
    
    float _maxHz = maxHertz;
    float _minHz = minHertz;
    float yToFreq = (y/BIT)*_maxHz;
    
    //TODO logarithmic scale
    freq = 1-(log(yToFreq)-log(_minHz)) / (log(_maxHz)-log(_minHz));
    freq *= _maxHz;
    //    freq = 1-(yToFreq-_minHz) / (_maxHz-_minHz);
    //    freq = (BIT-y+_minHz)/BIT*(_maxHz-_minHz);
    
    
    return freq;
    
    
}

//--------------------------------------------------------------
float ofApp::getFreqRight(float y){
    float freq=0;
    
    //    if(height>0){
    //    y-=9;
    
    float _maxHz = maxHertz;
    float _minHz = minHertz;
    float yToFreq = (y/BIT)*_maxHz;
    
    //TODO logarithmic scale
    freq = 1-(log(yToFreq)-log(_minHz)) / (log(_maxHz)-log(_minHz));
    freq *= _maxHz;
    //freq = 1-(yToFreq-minHz) / (maxHz-minHz);
    //freq= (spectrumHeight-y+minHz)/spectrumHeight*(maxHz-minHz);
    //    }
    
    
    return freq;
    
    
}


//--------------------------------------------------------------
void ofApp::audioRequested (float * output, int bufferSize, int nChannels){
    
    if (bPlaying) {
        
        for (int i = 0; i < bufferSize; i+=2){
            
            waveRight = 0.0;
            waveLeft = 0.0;
            
            for(int n=0; n<BIT; n++){
                
                if (ampLeft[n]>0.00001) {
                    phasesLeft[n] += 512./(44100.0/(hertzScaleLeft[n]));
                    
                    if ( phasesLeft[n] >= 511 ) phasesLeft[n] -= 512;
                    
                    //remainder = phases[n] - floor(phases[n]);
                    //wave+=(float) ((1-remainder) * sineBuffer[1+ (long) phases[n]] + remainder * sineBuffer[2+(long) phases[n]])*amp[n];
                    
                    if ( phasesLeft[n] < 0 ) phasesLeft[n] = 0;
                    
                    waveLeft+=(sineBufferLeft[1 + (long)phasesLeft[n]])*ampLeft[n];
                }
                
                if (ampRight[n]>0.00001) {
                    phasesRight[n] += 512./(44100.0/(hertzScaleRight[n]));
                    
                    if ( phasesRight[n] >= 511 ) phasesRight[n] -= 512;
                    
                    //remainder = phases[n] - floor(phases[n]);
                    //wave+=(float) ((1-remainder) * sineBuffer[1+ (long) phases[n]] + remainder * sineBuffer[2+(long) phases[n]])*amp[n];
                    
                    if ( phasesRight[n] < 0 ) phasesRight[n] = 0;
                    
                    waveRight+=(sineBufferRight[1 + (long)phasesRight[n]])*ampRight[n];
                }
                
            }
            
            waveRight/=10.0;
            waveLeft/=10.0;
            if(waveRight>1.0) waveRight=1.0;
            if(waveRight<-1.0) waveRight=-1.0;
            if(waveLeft>1.0) waveLeft=1.0;
            if(waveLeft<-1.0) waveLeft=-1.0;
            
            float _volume = 0.85;
            output[i*nChannels    ] = waveLeft * _volume;
            output[i*nChannels + 1] = waveRight * _volume;
        }
        
    } else {
        for (int i = 0; i < bufferSize; i++){
            output[i*nChannels    ] = 0;
            output[i*nChannels + 1] = 0;
        }
    }
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if (key==' ') bPlaying = !bPlaying;
    
    if (bPlaying)  {
        ofSoundStreamStart();
    } else {
        ofSoundStreamStop();
    }
    

    if (key=='c') {
        ofImage _pix;
        string _file;
        _pix.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_COLOR);
        _pix.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        _file = "../../../"+ofGetTimestampString()+" Capture.png";
        _pix.save( _file );
    }
    
    if (key=='f') {
        fullscreen = !fullscreen;
    }
    ofSetFullscreen(fullscreen);
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    threshold = ofMap(mouseY, 0, ofGetHeight(), 1, 0);
    
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
    screenMiddleX = ofGetWidth() * 0.5;
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}