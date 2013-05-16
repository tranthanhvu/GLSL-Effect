//
//  OpenGLView.h
//  GLSL-Effect
//
//  Created by yoyo on 5/16/13.
//  Copyright (c) 2013 yoyo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    
    GLuint _positionSlot;
    GLuint _colorSlot;
    
    GLuint _projectionUniform;
    
    GLuint _modelViewUniform;
    
    float _currentRotation;
    
    float _lastSin;
    float _currentSin;
    
    
    GLuint _floorTexture;
    GLuint _fishTexture;
    GLuint _textTexture;
    
    GLuint _texCoordSlot;
    GLuint _textureUniform;
    
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
    GLuint _vertexBuffer2;
    GLuint _indexBuffer2;
    
    //    NSMutableArray * _openGLObjects;
}

@end
