/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MimePart.h"

@interface MimePart (SMIMEDecoding)
- (id)decodeMultipartSigned;
- (id)decodeApplicationPkcs7_mime;
- (void)_setSMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (BOOL)_needsSignatureVerification:(id *)arg1;
@end

