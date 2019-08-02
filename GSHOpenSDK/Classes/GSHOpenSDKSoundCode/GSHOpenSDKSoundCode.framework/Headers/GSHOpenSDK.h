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

extern NSString * const GSHOpenSDKFamilyChangeNotification;                                 //当前家庭被切换
extern NSString * const GSHOpenSDKFamilyListUpdataNotification;                             //家庭列表更新
extern NSString * const GSHOpenSDKFamilyUpdataNotification;                                 //当前家庭改变
extern NSString * const GSHOpenSDKFamilyGatewayChangeNotification;                          //网关替换中
extern NSString * const GSHOpenSDKDeviceUpdataNotification;                                 //设备更新（会带上一个数组，改动相关房间的roomId）
extern NSString * const GSHOpenSDKSceneUpdataNotification;                                  //场景更新（会带上一个数组，改动相关房间的roomId）

@class GSHFamilyM;

@interface GSHOpenSDK : NSObject
@property(nonatomic,strong,readonly)GSHHTTPAPIClient *httpAPIClient;
@property(nonatomic,strong,readonly)GSHWebSocketClient *webSocketClient;
@property(nonatomic,strong,readonly)GSHOSSManagerClient *ossManagerClient;
@property(nonatomic,copy,readonly)NSString *userId;

@property(nonatomic,strong)NSMutableArray<GSHFamilyM*> *familyList;
@property(nonatomic,strong)GSHFamilyM *currentFamily;

+(instancetype)share;
//更新HttpApi服务域名与端口（不设置默认线上服务）
-(void)updateHttpDomain:(NSString*)httpDomain port:(NSNumber*)port;
//更新OSS服务域名(不设置默认线上服务)
-(void)updateOssDomain:(NSString*)ossDomain;
@end
