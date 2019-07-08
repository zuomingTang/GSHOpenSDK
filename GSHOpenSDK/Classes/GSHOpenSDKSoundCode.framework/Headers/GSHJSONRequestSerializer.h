//
//

#import <Foundation/Foundation.h>
#import "AFURLRequestSerialization.h"
#import "GSHRSAHandler.h"

@interface GSHJSONRequestSerializer : AFJSONRequestSerializer
@property(nonatomic,strong)NSDictionary<NSString *,id> *generalParams;
@end
