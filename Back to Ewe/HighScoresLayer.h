//
//  HighScoresLayer.h
//  Back to Ewe
//
//  Created by administrator on 4/21/14.
//  Copyright 2014 Silly Landmine Studios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "CCButton.h"

@interface HighScoresLayer : CCScene {
    NSUserDefaults* m_HighScoresList;
}

+ (HighScoresLayer *)scene;
- (id)init;

-(void)addScore:(int)score;

@end
