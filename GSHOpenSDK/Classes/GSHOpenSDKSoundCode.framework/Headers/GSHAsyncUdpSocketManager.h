//
//

#import <Foundation/Foundation.h>
#import "GCDAsyncUdpSocket.h"

extern NSString *const GSHAsyncUdpSocketErrorDomain;

typedef NS_ENUM(NSInteger, GSHAsyncUdpSocketError) {
    GSHAsyncSocketNoError = 0,
    GSHAsyncUdpSocketErrorSendTimeout,
    GSHAsyncUdpSocketErrorReceiveTimeout,
    GSHAsyncUdpSocketErrorCancelled, //任务被取消
};

typedef NS_ENUM(NSInteger, GSHAsyncUdpSocketTaskState) {
    GSHAsyncUdpSocketTaskStateSending   = 0,
    GSHAsyncUdpSocketTaskStateReceiving = 1,
    GSHAsyncUdpSocketTaskStateCanceled = 2,
    GSHAsyncUdpSocketTaskStateCompleted = 3,
};

@interface GSHAsyncUdpSocketTask : NSObject
@property (readonly, assign) long taskIdentifier;
@property (readonly, assign) GSHAsyncUdpSocketTaskState state;
- (void)cancel;
@end

@interface GSHAsyncUdpSocketManager : NSObject

-(instancetype)initBroadcastSocket;
-(GSHAsyncUdpSocketTask*)sendRequestData:(NSData*)requestData port:(uint16_t)post sendHandler:(void (^)(NSError *error))sendHandler receiveHandler:(BOOL(^)(NSData *responseData,NSData *address,NSError *error))receiveHandler;

@end
