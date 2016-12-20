/*
 * SamiRewardItemResource.h
 * 
 * 
 */

#ifndef SamiRewardItemResource_H_
#define SamiRewardItemResource_H_

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

class SamiRewardItemResource: public SamiObject {
public:
    SamiRewardItemResource();
    SamiRewardItemResource(String* json);
    virtual ~SamiRewardItemResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRewardItemResource* fromJson(String* obj);

    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPItemName();
    void setPItemName(String* pItem_name);
    Integer* getPMaxRank();
    void setPMaxRank(Integer* pMax_rank);
    Integer* getPMinRank();
    void setPMinRank(Integer* pMin_rank);
    Integer* getPQuantity();
    void setPQuantity(Integer* pQuantity);

private:
    Integer* pItem_id;
String* pItem_name;
Integer* pMax_rank;
Integer* pMin_rank;
Integer* pQuantity;
};

} /* namespace Swagger */

#endif /* SamiRewardItemResource_H_ */
