//
//  SocializeViewService.h
//  SocializeSDK
//
//  Created by Fawad Haider on 6/30/11.
//  Copyright 2011 Socialize, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SocializeView.h"
#import "SocializeRequest.h"
#import "SocializeViewService.h"
#import "SocializeCommonDefinitions.h"
#import "SocializeObjectFactory.h"
#import "SocializeProvider.h"
#import "SocializeService.h"

/**
 Socialize view service is the view creation engine.
 */
@interface SocializeViewService : SocializeService {

}

/**@name Create view*/

/**
 This method creates view for entity.
 
 Successful call of this method invokes <[SocializeServiceDelegate service:didCreate:]> method.
 In case of error it will be called <[SocializeServiceDelegate service:didFail:]> method.
 
 @param key Entity's URL which should be mark as viewed.
 @param lng Longitude *float* value. Could be nil. (OPTIONAL)
 @param lat Latitude  *float* value. Could be nil. (OPTIONAL)
 */
-(void)createViewForEntityKey:(NSString*)key longitude:(NSNumber*)lng latitude: (NSNumber*)lat;

/**
 This method creates view for entity.
 
 Successful call of this method invokes <[SocializeServiceDelegate service:didCreate:]> method.
 In case of error it will be called <[SocializeServiceDelegate service:didFail:]> method.
 
 @param entity <SocializeEntity> object which should be mark as viewed.
 @param lng Longitude *float* value. Could be nil. (OPTIONAL)
 @param lat Latitude  *float* value. Could be nil. (OPTIONAL)
 */
-(void)createViewForEntity:(id<SocializeEntity>)entity longitude:(NSNumber*)lng latitude: (NSNumber*)lat;

@end