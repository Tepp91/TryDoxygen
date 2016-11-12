/**
 * @file HelloWorld.h
 * @brief Hello Worldの出力を行います
 */

namespace App{
	/**
	 * Hello Worldの出力を行います
	 *
	 * 様々な言語のHello Worldを出力することができます
	 * @code
	 * HelloWorld helloWorld;
	 *
	 * helloWorld.SetLanguage(HelloWorld::Language::kEnglish);
	 * helloWorld.Output(); // Hello World
	 * @endcode
	 */
	class HelloWorld{
	public:
		/**
		 * 言語
		 */
		enum class Language{
			kEnglish,	//!< 英語
			kJapanese,	//!< 日本語
			kGermany,	//!< ドイツ語
			kFrench,	//!< フランス語
		};

	public:
		/**
		 * コンストラクタ
		 */
		HelloWorld();

		/**
		 * デストラクタ
		 */
		~HelloWorld() = default;

		/**
		 * Hello Worldを出力します
		 *
		 * SetLanguage関数で出力する言語を設定することができます
		 * @see SetLanguage
		 */
		void Output();

		/**
		 * 言語を設定します
		 * @param	language	言語
		 */
		void SetLanguage(Language language);

	private:
		Language	language_;	//!< 言語
	};

	//--------------------------------------------------------------------------
	inline void HelloWorld::SetLanguage(Language language)
	{
		language_ = language;
	}
} // namespace App

