/*
 * SamiPriceOverridable.h
 * 
 * 
 */

#ifndef SamiPriceOverridable_H_
#define SamiPriceOverridable_H_

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

class SamiPriceOverridable: public SamiObject {
public:
    SamiPriceOverridable();
    SamiPriceOverridable(String* json);
    virtual ~SamiPriceOverridable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPriceOverridable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Integer* getPMaxPrice();
    void setPMaxPrice(Integer* pMax_price);
    Integer* getPMinPrice();
    void setPMinPrice(Integer* pMin_price);

private:
    String* pDescription;
String* pType_hint;
Integer* pMax_price;
Integer* pMin_price;
};

} /* namespace Swagger */

#endif /* SamiPriceOverridable_H_ */
