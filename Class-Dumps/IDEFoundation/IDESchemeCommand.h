//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDESchemeCommand : NSObject
{
    BOOL _appleInternalOnly;
    NSString *_commandName;
    NSString *_commandNameGerund;
}

+ (id)availablePrimitiveSchemeCommands;
+ (id)allNonAppleInternalPrimitiveSchemeCommands;
+ (id)allPrimitiveSchemeCommands;
+ (id)availableSchemeCommands;
+ (id)allNonAppleInternalSchemeCommands;
+ (id)allSchemeCommands;
+ (id)installSchemeCommand;
+ (id)integrateSchemeCommand;
+ (id)analyzeSchemeCommand;
+ (id)archiveSchemeCommand;
+ (id)profileSchemeCommand;
+ (id)testSchemeCommand;
+ (id)launchSchemeCommand;
@property(readonly, copy, nonatomic) NSString *commandNameGerund; // @synthesize commandNameGerund=_commandNameGerund;
@property(readonly, copy, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
@property(readonly, nonatomic, getter=isAppleInternalOnly) BOOL appleInternalOnly; // @synthesize appleInternalOnly=_appleInternalOnly;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCommandName:(id)arg1 gerund:(id)arg2 appleInternalOnly:(BOOL)arg3;
- (id)init;

@end
