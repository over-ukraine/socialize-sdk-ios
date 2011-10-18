/*
 * SocializeActionBar.h
 * SocializeSDK
 *
 * Created on 10/5/11.
 * 
 * Copyright (c) 2011 Socialize, Inc.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import <UIKit/UIKit.h>
#import "SocializeBaseViewController.h"
#import "SocializeActionView.h"

@class SocializeCommentsTableViewController;
@protocol SocializeView;
@protocol SocializeEntity;
@protocol SocializeLike;

@interface SocializeActionBar : SocializeBaseViewController<SocializeActionViewDelegate> {
    @private
    CGRect viewRect;
    UIViewController* comentsNavController;   
    UIViewController* parentViewController;
    
    id<SocializeView> entityView;
    id<SocializeEntity> entity;
    id<SocializeLike> entityLike;
}

@property(nonatomic, assign) UIViewController* parentViewController;
@property(nonatomic, retain) id<SocializeEntity> entity;

+(SocializeActionBar*)createWithParentController:(UIViewController*)parentController andUrl: (NSString*)url;

-(id)initWithParantViewSize:(CGSize)parentViewSize andEntiryUrl:(NSString*)url;
-(id)initWithParantViewSize:(CGSize)parentViewSize andEntiry:(id<SocializeEntity>)entity;
-(void)incrementViewCount;
@end