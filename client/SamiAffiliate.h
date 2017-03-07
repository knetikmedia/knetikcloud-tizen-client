/*
 * SamiAffiliate.h
 * 
 * 
 */

#ifndef SamiAffiliate_H_
#define SamiAffiliate_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiAffiliate: public SamiObject {
public:
    SamiAffiliate();
    SamiAffiliate(String* json);
    virtual ~SamiAffiliate();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAffiliate* fromJson(String* obj);

    String* getPAffiliateKey();
    void setPAffiliateKey(String* pAffiliate_key);
    Integer* getPId();
    void setPId(Integer* pId);

private:
    String* pAffiliate_key;
Integer* pId;
};

} /* namespace Swagger */

#endif /* SamiAffiliate_H_ */
