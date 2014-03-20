//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCoding.h"

@interface IBAutolayoutMisplacementStatusRepresentation : NSObject <IBBinaryArchiving, NSCoding>
{
    id _viewRepresentation;
    struct CGRect _expectedLayoutFrameOrBounds;
    struct CGRect _actualLayoutFrameOrBounds;
}

@property(readonly, nonatomic) struct CGRect actualLayoutFrameOrBounds; // @synthesize actualLayoutFrameOrBounds=_actualLayoutFrameOrBounds;
@property(readonly, nonatomic) struct CGRect expectedLayoutFrameOrBounds; // @synthesize expectedLayoutFrameOrBounds=_expectedLayoutFrameOrBounds;
@property(readonly, nonatomic) id viewRepresentation; // @synthesize viewRepresentation=_viewRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewRepresentation:(id)arg1 expectedLayoutFrameOrBounds:(struct CGRect)arg2 actualLayoutFrameOrBounds:(struct CGRect)arg3;

@end
