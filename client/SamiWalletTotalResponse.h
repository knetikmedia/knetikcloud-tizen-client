/*
 * SamiWalletTotalResponse.h
 * 
 * 
 */

#ifndef SamiWalletTotalResponse_H_
#define SamiWalletTotalResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiWalletTotalResponse: public SamiObject {
public:
    SamiWalletTotalResponse();
    SamiWalletTotalResponse(String* json);
    virtual ~SamiWalletTotalResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiWalletTotalResponse* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Double* getPTotal();
    void setPTotal(Double* pTotal);

private:
    String* pCurrency_code;
Double* pTotal;
};

} /* namespace Swagger */

#endif /* SamiWalletTotalResponse_H_ */
