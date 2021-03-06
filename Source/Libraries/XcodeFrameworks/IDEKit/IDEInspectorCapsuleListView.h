/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTStackView.h"

@class IDEInspectorCapsule, NSArray, NSDictionary, NSMapTable, NSObject<IDEBindableDeclarativeInspectorController>, NSString;

@interface IDEInspectorCapsuleListView : DVTStackView
{
    NSObject<IDEBindableDeclarativeInspectorController> *inspectorController;
    NSMapTable *capsuleControllersByRepresentedObject;
    NSDictionary *capsuleVariantByMatchValueMap;
    NSMapTable *capsulesByRepresentedObject;
    IDEInspectorCapsule *defaultCapsule;
    NSString *capsuleVariantKeyPath;
    NSString *capsuleTitleKeyPath;
    NSString *capsuleVariantType;
    NSString *newCapsuleTitle;
    id selectedPrimitiveValue;
    SEL deleteCapsuleAction;
    SEL newCapsuleAction;
    NSArray *capsules;
}

+ (id)capsuleListForXMLElement:(id)arg1 boundTo:(id)arg2;
+ (void)initialize;
- (id)addButtonLozenge;
- (id)capsuleForRepresentedObject:(id)arg1;
- (id)capsuleViewForRepresentedObject:(id)arg1 boundTo:(id)arg2;
- (id)capsuleViewForStatusLabel:(id)arg1;
- (id)dvtExtraBindings;
- (id)initWithCapsules:(id)arg1 capsuleTitleKeyPath:(id)arg2 newCapsuleTitle:(id)arg3 newCapsuleAction:(SEL)arg4 deleteCapsuleAction:(SEL)arg5 inspectorController:(id)arg6 capsuleVariantKeyPath:(id)arg7 capsuleVariantType:(id)arg8;
- (BOOL)isFlipped;
- (void)updateBoundValue;

@end

