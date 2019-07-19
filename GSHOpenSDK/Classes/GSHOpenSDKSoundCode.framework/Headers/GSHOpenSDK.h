//
//  GSHOpenSDK.h
//  SmartHome
//
//  Created by gemdale on 2019/7/5.
//  Copyright © 2019 gemdale. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GSHHTTPAPIClient.h"
#import "GSHWebSocketClient.h"
#import "GSHOSSManagerClient.h"

@interface GSHOpenSDK : NSObject
@property(nonatomic,strong,readonly)GSHHTTPAPIClient *httpAPIClient;
@property(nonatomic,strong,readonly)GSHWebSocketClient *webSocketClient;
@property(nonatomic,strong,readonly)GSHOSSManagerClient *ossManagerClient;
@property(nonatomic,copy,readonly)NSString *userId;

+(instancetype)share;
-(void)updateUserId:(NSString*)userId sessionId:(NSString*)sessionId;
-(void)updateHttpDomain:(NSString*)httpDomain port:(NSNumber*)port;
-(void)updateOssDomain:(NSString*)ossDomain;
-(void)updateGWId:(NSString*)gwId;
@end
