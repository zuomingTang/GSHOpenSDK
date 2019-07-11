//
//

#import <Foundation/Foundation.h>
#import "AFURLRequestSerialization.h"

@interface GSHJSONRequestSerializer : AFJSONRequestSerializer
@property(nonatomic,strong)NSDictionary<NSString *,id> *generalParams;
@end
