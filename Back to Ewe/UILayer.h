//
//  UILayer.h
//  Back to Ewe
//
//  Created by Matthew Pohlmann on 3/31/14.
//  Copyright 2014 Silly Landmine Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface UILayer : CCNode {
    float m_woolRemaining;
    float m_woolCapacity;
    
    float m_healthRemaining;
    float m_healthCapacity;
    
    float m_Score;
    CCLabelTTF *m_scoreLabel;
    
    int m_Lives;
    CCLabelTTF* m_livesLabel;
    
    CCLabelTTF* m_GameOverLabel;
}

@property float Wool;
@property float Health;
@property float Score;
@property int Lives;

//----//
- (void) showGameOverLabel:(BOOL) choice;
- (void) resetGame;
- (void) showPauseMenu;
//----//

@end
