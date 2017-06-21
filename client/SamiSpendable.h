/*
 * SamiSpendable.h
 * 
 * 
 */

#ifndef SamiSpendable_H_
#define SamiSpendable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSpendable: public SamiObject {
public:
    SamiSpendable();
    SamiSpendable(String* json);
    virtual ~SamiSpendable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSpendable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Integer* getPValue();
    void setPValue(Integer* pValue);

private:
    String* pDescription;
String* pType_hint;
String* pCurrency_code;
Integer* pValue;
};

} /* namespace Swagger */

#endif /* SamiSpendable_H_ */
