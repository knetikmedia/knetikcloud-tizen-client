/*
 * SamiRewardCurrencyResource.h
 * 
 * 
 */

#ifndef SamiRewardCurrencyResource_H_
#define SamiRewardCurrencyResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiRewardCurrencyResource: public SamiObject {
public:
    SamiRewardCurrencyResource();
    SamiRewardCurrencyResource(String* json);
    virtual ~SamiRewardCurrencyResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRewardCurrencyResource* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPCurrencyName();
    void setPCurrencyName(String* pCurrency_name);
    Integer* getPMaxRank();
    void setPMaxRank(Integer* pMax_rank);
    Integer* getPMinRank();
    void setPMinRank(Integer* pMin_rank);
    Boolean* getPPercent();
    void setPPercent(Boolean* pPercent);
    Double* getPValue();
    void setPValue(Double* pValue);

private:
    String* pCurrency_code;
String* pCurrency_name;
Integer* pMax_rank;
Integer* pMin_rank;
Boolean* pPercent;
Double* pValue;
};

} /* namespace Swagger */

#endif /* SamiRewardCurrencyResource_H_ */
