/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class FBMCanonicalThreadKey, FBMGroupThreadKey;

@interface FBMThreadKey : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBMGroupThreadKey *_groupThreadKey_groupThreadKey;
    FBMCanonicalThreadKey *_canonicalThreadKey_canonicalThreadKey;
}

+ (id)groupThreadKeyWithGroupThreadKey:(id)arg1;
+ (id)canonicalThreadKeyWithCanonicalThreadKey:(id)arg1;
//- (void).cxx_destruct;
- (void)matchGroupThreadKey:(id)arg1 canonicalThreadKey:(void)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

