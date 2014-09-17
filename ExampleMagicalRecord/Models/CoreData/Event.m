#import "Event.h"


@interface Event ()

// Private interface goes here.

@end


@implementation Event

- (NSTimeInterval)differentWithEvent:(Event *)event
{
    return fabs([self.timeStamp timeIntervalSinceDate:event.timeStamp]);
}

@end
