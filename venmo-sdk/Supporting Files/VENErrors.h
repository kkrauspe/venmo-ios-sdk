#import <Foundation/Foundation.h>

extern NSString *const VenmoSDKDomain;

typedef enum VENSDKErrorCode {
    // error validating signed transaction
    VENSDKErrorTransactionValidationError = 1,
    // Venmo server failed to complete transaction
    VENSDKErrorTransactionFailed,
    // Non-success HTTP status code was returned
    VENSDKErrorHTTPError,
    // An error occurred related to an iOS API call
    VENSDKErrorSystemApi,
    // The session is not open
    VENSDKErrorSessionNotOpen,
    // The session's access token has expired
    VENSDKErrorAccessTokenExpired
} VENSDKErrorCode;
