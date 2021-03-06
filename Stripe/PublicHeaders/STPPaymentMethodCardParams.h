//
//  STPPaymentMethodCardParams.h
//  Stripe
//
//  Created by Yuki Tokuhiro on 3/6/19.
//  Copyright © 2019 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "STPFormEncodable.h"

@class STPCardParams;

NS_ASSUME_NONNULL_BEGIN

/**
 The user's card details.
 */
@interface STPPaymentMethodCardParams : NSObject <STPFormEncodable>

/**
 A convenience initializer for creating a payment method from a card source.
 This should be used to help with migrations to Payment Methods from Sources.
 */
- (instancetype)initWithCardSourceParams:(STPCardParams *)cardSourceParams;

/**
 The card number, as a string without any separators. Ex. @"4242424242424242"
 */
@property (nonatomic, copy, nullable) NSString *number;

/**
 Number representing the card's expiration month. Ex. @1
 */
@property (nonatomic, nullable) NSNumber *expMonth;

/**
 Two- or four-digit number representing the card's expiration year.
 */
@property (nonatomic, nullable) NSNumber *expYear;

/**
 For backwards compatibility, you can alternatively set this as a Stripe token (e.g., for apple pay)
 */
@property (nonatomic, copy, nullable) NSString *token;

/**
 Card security code. It is highly recommended to always include this value.
 */
@property (nonatomic, copy, nullable) NSString *cvc;

/**
The last 4 digits of the card.
*/
@property (nonatomic, readonly, nullable) NSString *last4;

@end

NS_ASSUME_NONNULL_END
