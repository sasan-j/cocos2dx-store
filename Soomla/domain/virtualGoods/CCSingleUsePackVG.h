//
// Created by Fedor Shubin on 5/19/13.
//

#ifndef __SingleUsePackVGX_H_
#define __SingleUsePackVGX_H_

#include "CCVirtualGood.h"

namespace soomla {
	/** \class CCSingleUsePackVG
		\brief A pack of single use virtual goods.

		A pack of single use virtual goods.
	*/
    class CCSingleUsePackVG : public CCVirtualGood {
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mGoodItemId, GoodItemId, JSON_VGP_GOOD_ITEMID);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__Integer *, mGoodAmount, GoodAmount, JSON_VGP_GOOD_AMOUNT);
    public:
        CCSingleUsePackVG(): CCVirtualGood(), mGoodItemId(NULL), mGoodAmount(NULL) {};
        static CCSingleUsePackVG *create(cocos2d::__String* goodItemId, cocos2d::__Integer* goodAmount,
                cocos2d::__String* name, cocos2d::__String* description,
                cocos2d::__String* itemId, CCPurchaseType * purchaseType);
        static CCSingleUsePackVG *createWithDictionary(cocos2d::__Dictionary *dict);

		/**
		   Create a CCSingleUsePackVG.
		   \param goodItemId The itemId of the good.
		   \param goodAmount The amount the user receives when buying this pack.
		   \param name The pack's name.
		   \param description The packs's description.
		   \param itemId The pack's itemId.
		   \param purchaseType The purchase type for this pack.
		   \return The pack.
		*/
        bool init(cocos2d::__String* goodItemId, cocos2d::__Integer* goodAmount,
				  cocos2d::__String* name, cocos2d::__String* description,
				  cocos2d::__String* itemId, CCPurchaseType * purchaseType);

		/**
		   Create a CCSingleUsePackVG.
		   \param dict A dictionary containing keys to each of the parameters required by the create function.
		   \return The pack.
		*/
        bool initWithDictionary(cocos2d::__Dictionary *dict);

        cocos2d::__Dictionary *toDictionary();

        virtual ~CCSingleUsePackVG();
    };
};

#endif //__SingleUsePackVGX_H_
