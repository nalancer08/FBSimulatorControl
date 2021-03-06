//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimDisplayDescriptorState-Protocol.h>

@interface DefaultDisplayDescriptorState : NSObject <SimDisplayDescriptorState>
{
    int _powerState;
    int _displayClass;
    unsigned int _defaultWidthForDisplay;
    unsigned int _defaultHeightForDisplay;
}

+ (id)defaultDisplayDescriptorStateWithPowerState:(int)arg1 displayClass:(int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
@property (nonatomic, assign) unsigned int defaultHeightForDisplay;
@property (nonatomic, assign) unsigned int defaultWidthForDisplay;
@property (nonatomic, assign) int displayClass;
@property (nonatomic, assign) int powerState;
- (id)xpcObject;

@end
