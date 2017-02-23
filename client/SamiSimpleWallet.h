/*
 * SamiSimpleWallet.h
 * 
 * 
 */

#ifndef SamiSimpleWallet_H_
#define SamiSimpleWallet_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSimpleWallet: public SamiObject {
public:
    SamiSimpleWallet();
    SamiSimpleWallet(String* json);
    virtual ~SamiSimpleWallet();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleWallet* fromJson(String* obj);

    Double* getPBalance();
    void setPBalance(Double* pBalance);
    String* getPCode();
    void setPCode(String* pCode);
    String* getPCurrencyName();
    void setPCurrencyName(String* pCurrency_name);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    Double* pBalance;
String* pCode;
String* pCurrency_name;
Integer* pId;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiSimpleWallet_H_ */
