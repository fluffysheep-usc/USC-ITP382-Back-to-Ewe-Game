//
//  WoolString.h
//  Back to Ewe
//
//  Created by Matthew Pohlmann on 3/31/14.
//  Copyright 2014 Silly Landmine Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class Sheep;
@class Node;

@interface WoolString : CCNode {
    CGPoint m_Start;
    CGPoint m_End;
    
    CGFloat m_Width;
    
    CCPhysicsJoint* m_Joint;
}

@property CGPoint start;
@property CGPoint end;
@property CGFloat width;

/* 
 Need to use this init function if you want it to work, i.e.:
 
 WoolString* string = [[WoolString node] initWithStringFromSheep:mySheep toNode:myNode];
 
 */
- (instancetype) initWithStringFromSheep:(Sheep*)sheep toNode:(Node*)node;

/*
 Need to call this when destroying a WoolString to remove its physics properly
 
 */
- (void) invalidate;

/*
 Helper functions to validate whether or not the string can be created based upon length
 */

+ (float) findStringLengthFromSheep:(Sheep*)sheep toNode:(Node*) node;

- (float) findCurrentStringLength;

@end
